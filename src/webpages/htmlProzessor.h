//#include <Arduino.h>
String htmlProcessor(const String &var)
{
    extern Settings _settings;
    if (var == F("HEAD_TEMPLATE"))
        return (HTML_HEAD);
    if (var == F("FOOT_TEMPLATE"))
        return (HTML_FOOT);
    if (var == F("SOFTWARE_VERSION"))
        return (SOFTWARE_VERSION);
    if (var == F("SWVERSION"))
        return (SWVERSION);
    if (var == F("Flash_Size"))
        return (String(FlashSize).c_str());
    if (var == F("ESP01"))
        return (String(ESP01).c_str());
    if (var == F("WAKEUP_PIN"))
        return (String(WAKEUP_PIN).c_str());
    if (var == F("RELAISPIN"))
        return (String(RELAIS_PIN).c_str());
    if (var == F("DEVICE_NAME"))
        return (_settings.data.deviceName);
    if (var == F("MQTT_SERVER"))
        return (_settings.data.mqttServer);
    if (var == F("MQTT_PORT"))
        return (String(_settings.data.mqttPort).c_str());
    if (var == F("MQTT_USER"))
        return (_settings.data.mqttUser);
    if (var == F("MQTT_PASS"))
        return (_settings.data.mqttPassword);
    if (var == F("MQTT_TOPIC"))
        return (_settings.data.mqttTopic);
    if (var == F("MQTT_REFRESH"))
        return (String(_settings.data.mqttRefresh).c_str());
    if (var == F("MQTT_JSON"))
        return (_settings.data.mqttJson ? "checked":"");
    if (var == F("BMS_WAKE"))
        return (_settings.data.wakeupEnable ? "checked":"");
    if (var == F("RELAIS_ENABLE"))
        return (_settings.data.relaisEnable ? "checked":"");
    if (var == F("RELAIS_INVERT"))
        return (_settings.data.relaisInvert ? "checked":"");
    if (var == F("RELAIS_FAILSAVE"))
        return (_settings.data.relaisFailsafe ? "checked":"");
    if (var == F("RELAIS_VALUE"))
        return (String(_settings.data.relaisSetValue, 3).c_str());
    if (var == F("RELAIS_HYST"))
        return (String(_settings.data.relaisHysteresis, 3).c_str());
    if (var == F("RELAIS_FUNCTION"))
        return (String(_settings.data.relaisFunction).c_str());
    if (var == F("RELAIS_COMP"))
        return (String(_settings.data.relaisComparsion).c_str());
    return String();
}
