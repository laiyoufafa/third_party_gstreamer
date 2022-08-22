
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "photography-enumtypes.h"
#include "photography.h"
#include "photography-prelude.h"

#define C_ENUM(v) ((gint) v)
#define C_FLAGS(v) ((guint) v)

/* enumerations from "photography.h" */

GType
gst_photography_noise_reduction_get_type (void)
{
static gsize gtype_id = 0;
static const GFlagsValue values[] = {
    { C_FLAGS(GST_PHOTOGRAPHY_NOISE_REDUCTION_BAYER), "GST_PHOTOGRAPHY_NOISE_REDUCTION_BAYER", "bayer" },
    { C_FLAGS(GST_PHOTOGRAPHY_NOISE_REDUCTION_YCC), "GST_PHOTOGRAPHY_NOISE_REDUCTION_YCC", "ycc" },
    { C_FLAGS(GST_PHOTOGRAPHY_NOISE_REDUCTION_TEMPORAL), "GST_PHOTOGRAPHY_NOISE_REDUCTION_TEMPORAL", "temporal" },
    { C_FLAGS(GST_PHOTOGRAPHY_NOISE_REDUCTION_FIXED), "GST_PHOTOGRAPHY_NOISE_REDUCTION_FIXED", "fixed" },
    { C_FLAGS(GST_PHOTOGRAPHY_NOISE_REDUCTION_EXTRA), "GST_PHOTOGRAPHY_NOISE_REDUCTION_EXTRA", "extra" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_flags_register_static (g_intern_static_string ("GstPhotographyNoiseReduction"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_white_balance_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_AUTO), "GST_PHOTOGRAPHY_WB_MODE_AUTO", "auto" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_DAYLIGHT), "GST_PHOTOGRAPHY_WB_MODE_DAYLIGHT", "daylight" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_CLOUDY), "GST_PHOTOGRAPHY_WB_MODE_CLOUDY", "cloudy" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_SUNSET), "GST_PHOTOGRAPHY_WB_MODE_SUNSET", "sunset" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_TUNGSTEN), "GST_PHOTOGRAPHY_WB_MODE_TUNGSTEN", "tungsten" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_FLUORESCENT), "GST_PHOTOGRAPHY_WB_MODE_FLUORESCENT", "fluorescent" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_MANUAL), "GST_PHOTOGRAPHY_WB_MODE_MANUAL", "manual" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_WARM_FLUORESCENT), "GST_PHOTOGRAPHY_WB_MODE_WARM_FLUORESCENT", "warm-fluorescent" },
    { C_ENUM(GST_PHOTOGRAPHY_WB_MODE_SHADE), "GST_PHOTOGRAPHY_WB_MODE_SHADE", "shade" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyWhiteBalanceMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_color_tone_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_NORMAL), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_NORMAL", "normal" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_SEPIA), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_SEPIA", "sepia" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_NEGATIVE), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_NEGATIVE", "negative" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_GRAYSCALE), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_GRAYSCALE", "grayscale" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_NATURAL), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_NATURAL", "natural" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_VIVID), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_VIVID", "vivid" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_COLORSWAP), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_COLORSWAP", "colorswap" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_SOLARIZE), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_SOLARIZE", "solarize" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_OUT_OF_FOCUS), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_OUT_OF_FOCUS", "out-of-focus" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKY_BLUE), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKY_BLUE", "sky-blue" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_GRASS_GREEN), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_GRASS_GREEN", "grass-green" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKIN_WHITEN), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKIN_WHITEN", "skin-whiten" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_POSTERIZE), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_POSTERIZE", "posterize" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_WHITEBOARD), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_WHITEBOARD", "whiteboard" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_BLACKBOARD), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_BLACKBOARD", "blackboard" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_AQUA), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_AQUA", "aqua" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_EMBOSS), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_EMBOSS", "emboss" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKETCH), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_SKETCH", "sketch" },
    { C_ENUM(GST_PHOTOGRAPHY_COLOR_TONE_MODE_NEON), "GST_PHOTOGRAPHY_COLOR_TONE_MODE_NEON", "neon" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyColorToneMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_scene_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_MANUAL), "GST_PHOTOGRAPHY_SCENE_MODE_MANUAL", "manual" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_CLOSEUP), "GST_PHOTOGRAPHY_SCENE_MODE_CLOSEUP", "closeup" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_PORTRAIT), "GST_PHOTOGRAPHY_SCENE_MODE_PORTRAIT", "portrait" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_LANDSCAPE), "GST_PHOTOGRAPHY_SCENE_MODE_LANDSCAPE", "landscape" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_SPORT), "GST_PHOTOGRAPHY_SCENE_MODE_SPORT", "sport" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_NIGHT), "GST_PHOTOGRAPHY_SCENE_MODE_NIGHT", "night" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_AUTO), "GST_PHOTOGRAPHY_SCENE_MODE_AUTO", "auto" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_ACTION), "GST_PHOTOGRAPHY_SCENE_MODE_ACTION", "action" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_NIGHT_PORTRAIT), "GST_PHOTOGRAPHY_SCENE_MODE_NIGHT_PORTRAIT", "night-portrait" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_THEATRE), "GST_PHOTOGRAPHY_SCENE_MODE_THEATRE", "theatre" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_BEACH), "GST_PHOTOGRAPHY_SCENE_MODE_BEACH", "beach" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_SNOW), "GST_PHOTOGRAPHY_SCENE_MODE_SNOW", "snow" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_SUNSET), "GST_PHOTOGRAPHY_SCENE_MODE_SUNSET", "sunset" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_STEADY_PHOTO), "GST_PHOTOGRAPHY_SCENE_MODE_STEADY_PHOTO", "steady-photo" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_FIREWORKS), "GST_PHOTOGRAPHY_SCENE_MODE_FIREWORKS", "fireworks" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_PARTY), "GST_PHOTOGRAPHY_SCENE_MODE_PARTY", "party" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_CANDLELIGHT), "GST_PHOTOGRAPHY_SCENE_MODE_CANDLELIGHT", "candlelight" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_BARCODE), "GST_PHOTOGRAPHY_SCENE_MODE_BARCODE", "barcode" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_BACKLIGHT), "GST_PHOTOGRAPHY_SCENE_MODE_BACKLIGHT", "backlight" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_FLOWERS), "GST_PHOTOGRAPHY_SCENE_MODE_FLOWERS", "flowers" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_AR), "GST_PHOTOGRAPHY_SCENE_MODE_AR", "ar" },
    { C_ENUM(GST_PHOTOGRAPHY_SCENE_MODE_HDR), "GST_PHOTOGRAPHY_SCENE_MODE_HDR", "hdr" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographySceneMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_flash_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_FLASH_MODE_AUTO), "GST_PHOTOGRAPHY_FLASH_MODE_AUTO", "auto" },
    { C_ENUM(GST_PHOTOGRAPHY_FLASH_MODE_OFF), "GST_PHOTOGRAPHY_FLASH_MODE_OFF", "off" },
    { C_ENUM(GST_PHOTOGRAPHY_FLASH_MODE_ON), "GST_PHOTOGRAPHY_FLASH_MODE_ON", "on" },
    { C_ENUM(GST_PHOTOGRAPHY_FLASH_MODE_FILL_IN), "GST_PHOTOGRAPHY_FLASH_MODE_FILL_IN", "fill-in" },
    { C_ENUM(GST_PHOTOGRAPHY_FLASH_MODE_RED_EYE), "GST_PHOTOGRAPHY_FLASH_MODE_RED_EYE", "red-eye" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyFlashMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_focus_status_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_STATUS_NONE), "GST_PHOTOGRAPHY_FOCUS_STATUS_NONE", "none" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_STATUS_RUNNING), "GST_PHOTOGRAPHY_FOCUS_STATUS_RUNNING", "running" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_STATUS_FAIL), "GST_PHOTOGRAPHY_FOCUS_STATUS_FAIL", "fail" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_STATUS_SUCCESS), "GST_PHOTOGRAPHY_FOCUS_STATUS_SUCCESS", "success" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyFocusStatus"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_caps_get_type (void)
{
static gsize gtype_id = 0;
static const GFlagsValue values[] = {
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_NONE), "GST_PHOTOGRAPHY_CAPS_NONE", "none" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_EV_COMP), "GST_PHOTOGRAPHY_CAPS_EV_COMP", "ev-comp" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_ISO_SPEED), "GST_PHOTOGRAPHY_CAPS_ISO_SPEED", "iso-speed" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_WB_MODE), "GST_PHOTOGRAPHY_CAPS_WB_MODE", "wb-mode" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_TONE), "GST_PHOTOGRAPHY_CAPS_TONE", "tone" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_SCENE), "GST_PHOTOGRAPHY_CAPS_SCENE", "scene" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_FLASH), "GST_PHOTOGRAPHY_CAPS_FLASH", "flash" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_ZOOM), "GST_PHOTOGRAPHY_CAPS_ZOOM", "zoom" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_FOCUS), "GST_PHOTOGRAPHY_CAPS_FOCUS", "focus" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_APERTURE), "GST_PHOTOGRAPHY_CAPS_APERTURE", "aperture" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_EXPOSURE), "GST_PHOTOGRAPHY_CAPS_EXPOSURE", "exposure" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_SHAKE), "GST_PHOTOGRAPHY_CAPS_SHAKE", "shake" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_WHITE_BALANCE), "GST_PHOTOGRAPHY_CAPS_WHITE_BALANCE", "white-balance" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_NOISE_REDUCTION), "GST_PHOTOGRAPHY_CAPS_NOISE_REDUCTION", "noise-reduction" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_FLICKER_REDUCTION), "GST_PHOTOGRAPHY_CAPS_FLICKER_REDUCTION", "flicker-reduction" },
    { C_FLAGS(GST_PHOTOGRAPHY_CAPS_ALL), "GST_PHOTOGRAPHY_CAPS_ALL", "all" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_flags_register_static (g_intern_static_string ("GstPhotographyCaps"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_shake_risk_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_SHAKE_RISK_LOW), "GST_PHOTOGRAPHY_SHAKE_RISK_LOW", "low" },
    { C_ENUM(GST_PHOTOGRAPHY_SHAKE_RISK_MEDIUM), "GST_PHOTOGRAPHY_SHAKE_RISK_MEDIUM", "medium" },
    { C_ENUM(GST_PHOTOGRAPHY_SHAKE_RISK_HIGH), "GST_PHOTOGRAPHY_SHAKE_RISK_HIGH", "high" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyShakeRisk"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_flicker_reduction_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_FLICKER_REDUCTION_OFF), "GST_PHOTOGRAPHY_FLICKER_REDUCTION_OFF", "off" },
    { C_ENUM(GST_PHOTOGRAPHY_FLICKER_REDUCTION_50HZ), "GST_PHOTOGRAPHY_FLICKER_REDUCTION_50HZ", "50hz" },
    { C_ENUM(GST_PHOTOGRAPHY_FLICKER_REDUCTION_60HZ), "GST_PHOTOGRAPHY_FLICKER_REDUCTION_60HZ", "60hz" },
    { C_ENUM(GST_PHOTOGRAPHY_FLICKER_REDUCTION_AUTO), "GST_PHOTOGRAPHY_FLICKER_REDUCTION_AUTO", "auto" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyFlickerReductionMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_focus_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_AUTO), "GST_PHOTOGRAPHY_FOCUS_MODE_AUTO", "auto" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_MACRO), "GST_PHOTOGRAPHY_FOCUS_MODE_MACRO", "macro" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_PORTRAIT), "GST_PHOTOGRAPHY_FOCUS_MODE_PORTRAIT", "portrait" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_INFINITY), "GST_PHOTOGRAPHY_FOCUS_MODE_INFINITY", "infinity" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_HYPERFOCAL), "GST_PHOTOGRAPHY_FOCUS_MODE_HYPERFOCAL", "hyperfocal" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_EXTENDED), "GST_PHOTOGRAPHY_FOCUS_MODE_EXTENDED", "extended" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_CONTINUOUS_NORMAL), "GST_PHOTOGRAPHY_FOCUS_MODE_CONTINUOUS_NORMAL", "continuous-normal" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_CONTINUOUS_EXTENDED), "GST_PHOTOGRAPHY_FOCUS_MODE_CONTINUOUS_EXTENDED", "continuous-extended" },
    { C_ENUM(GST_PHOTOGRAPHY_FOCUS_MODE_MANUAL), "GST_PHOTOGRAPHY_FOCUS_MODE_MANUAL", "manual" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyFocusMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

GType
gst_photography_exposure_mode_get_type (void)
{
static gsize gtype_id = 0;
static const GEnumValue values[] = {
    { C_ENUM(GST_PHOTOGRAPHY_EXPOSURE_MODE_AUTO), "GST_PHOTOGRAPHY_EXPOSURE_MODE_AUTO", "auto" },
    { C_ENUM(GST_PHOTOGRAPHY_EXPOSURE_MODE_MANUAL), "GST_PHOTOGRAPHY_EXPOSURE_MODE_MANUAL", "manual" },
{ 0, NULL, NULL }
        };
        if (g_once_init_enter (&gtype_id)) {
            GType new_type = g_enum_register_static (g_intern_static_string ("GstPhotographyExposureMode"), values);
            g_once_init_leave (&gtype_id, new_type);
        }
        return (GType) gtype_id;
        }

/* Generated data ends here */

