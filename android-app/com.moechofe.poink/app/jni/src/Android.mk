LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := main

SDL_PATH := ../SDL

LOCAL_C_INCLUDES := $(LOCAL_PATH)/$(SDL_PATH)/include

# Add your application source files here...
LOCAL_SRC_FILES :=  disk_drive.c core.c core_delegate.c data_manager.c charsets.c cmd_audio.c cmd_background.c cmd_control.c cmd_data.c cmd_files.c cmd_io.c cmd_maths.c cmd_memory.c cmd_screen.c cmd_sprites.c cmd_strings.c cmd_subs.c cmd_text.c cmd_variables.c data.c error.c interpreter.c interpreter_utils.c labels.c rcstring.c string_utils.c token.c tokenizer.c value.c variables.c audio_lib.c default_characters.c sprites_lib.c startup_sequence.c text_lib.c audio_chip.c machine.c video_chip.c overlay.c overlay_data.c boot_intro.c dev_menu.c main.c runner.c screenshot.c settings.c system_paths.c utils.c

LOCAL_SHARED_LIBRARIES := SDL2

LOCAL_LDLIBS := -lGLESv1_CM -lGLESv2 -llog

include $(BUILD_SHARED_LIBRARY)
