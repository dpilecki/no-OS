#See No-OS/tool/scripts/src_model.mk for variable description

SRC_DIRS += $(PROJECT)/src
SRC_DIRS += $(NO-OS)/drivers/adc/ad7124

SRC_DIRS += $(NO-OS)/network
SRC_DIRS += $(PLATFORM_DRIVERS)
SRC_DIRS += $(NO-OS)/util
SRC_DIRS += $(INCLUDE)

# Add to IGNORE_FILES files to be ignored from build
IGNORED_FILES += $(NO-OS)/drivers/adc/ad7124/ad7124_regs.c
IGNORED_FILES += $(NO-OS)/drivers/adc/ad7124/ad7124_regs.h

LIBRARIES += iio

ENABLE_IIO_NETWORK = n
DISABLE_SECURE_SOCKET=y

