/*
DALY BMS to MQTT Project
https://github.com/softwarecrash/DALY-BMS-to-MQTT
This code is free for use without any waranty.
when copy code or reuse make a note where the codes comes from.
*/

const char HTML_CONFIRM_RESET[] PROGMEM = R"rawliteral(
%HEAD_TEMPLATE%
<figure class="text-center"><h1>Erase all Data?</h1></figure>
<div class="d-grid gap-2">
<a class="btn btn-danger" href="/reset" role="button">Yes</a>
<a class="btn btn-primary" href="/settings" role="button">No</a>
</div>
%FOOT_TEMPLATE%
)rawliteral";


const char HTML_SETTINGS[] PROGMEM = R"rawliteral(
%HEAD_TEMPLATE%
<figure class="text-center"><h1>Settings</h1></figure>
<div class="d-grid gap-2">
<form method="POST" action="/update" enctype="multipart/form-data">
<div class="input-group" id="flash_block" style="display: none;">
<input class="form-control" id="inputGroupFile04" aria-describedby="inputGroupFileAddon04" aria-label="Upload" type="file" name="update"><input class="btn btn-outline-secondary" id="inputGroupFileAddon04" type="submit" value="Update">
</div>
</form>
<div class="row gx-0 mb-2" id="flash_alert" style="display: none;">
    <div class="alert alert-warning" style="text-align: center;">
    <span><b>ESP FLASH TO SMALL FOR OTA-UPDATE</b></span>
    </div>
</div>
<a class="btn btn-primary" href="/settingsedit" role="button">Configure</a>
<a class="btn btn-warning" href="/reboot" role="button">Reboot</a>
<a class="btn btn-primary" href="/confirmreset" role="button">Reset ESP</a>
<a class="btn btn-primary" href="/" role="button">Back</a>
</div>
%FOOT_TEMPLATE%
<script>
        var Flash_Size = %Flash_Size%;
        console.log(Flash_Size);
        if (Flash_Size < 1048575) {
            document.getElementById("flash_alert").style.display = '';
            document.getElementById("flash_block").style.display = 'none';
        }else{
            document.getElementById("flash_alert").style.display = 'none';
            document.getElementById("flash_block").style.display = '';
        }

</script>
)rawliteral";


