#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "error.h"
#include "iio.h"
#include "iio_ad7124.h"

struct iio_attribute ad7124_chan_setup = {
	.name = "ad7124_chan_setup",
	.show = ad1724_iio_read_chan_setup,
	.store = ad1724_iio_change_chan_setup
};

struct iio_attribute ad7124_chan_ainp = {
	.name = "ad7124_chan_ainp",
	.show = ad1724_iio_read_chan_ainp,
	.store = ad1724_iio_change_chan_ainp
};

struct iio_attribute ad7124_chan_ainm = {
	.name = "ad7124_chan_ainm",
	.show = ad1724_iio_read_chan_ainm,
	.store = ad1724_iio_change_chan_ainm
};

struct iio_attribute *channel_attributes[] = {
	&ad7124_chan_setup,
	&ad7124_chan_ainp,
	&ad7124_chan_ainm,
	NULL,
};

struct iio_channel ad7124_ch_0 = {
	.name = "CH_0",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_1 = {
	.name = "CH_1",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_2 = {
	.name = "CH_2",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_3 = {
	.name = "CH_3",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_4 = {
	.name = "CH_4",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_5 = {
	.name = "CH_5",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_6 = {
	.name = "CH_6",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_7 = {
	.name = "CH_7",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_8 = {
	.name = "CH_8",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_9 = {
	.name = "CH_9",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_10 = {
	.name = "CH_10",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_11 = {
	.name = "CH_11",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_12 = {
	.name = "CH_12",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_13 = {
	.name = "CH_13",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_14 = {
	.name = "CH_14",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel ad7124_ch_15 = {
	.name = "CH_15",
	.ch_type = IIO_ALTVOLTAGE,
	.scan_index = 0,
	.scan_type = {
		.sign = 's',
		.realbits = 24,
		.storagebits = 32,
		.shift = 0,
		.is_big_endian = 0
	},
	.attributes = channel_attributes,
	.ch_out = 0
};

struct iio_channel *ad7124_channels[] = {
	&ad7124_ch_0,
	&ad7124_ch_1,
	&ad7124_ch_2,
	&ad7124_ch_3,
	&ad7124_ch_4,
	&ad7124_ch_5,
	&ad7124_ch_6,
	&ad7124_ch_7,
	&ad7124_ch_8,
	&ad7124_ch_9,
	&ad7124_ch_10,
	&ad7124_ch_11,
	&ad7124_ch_12,
	&ad7124_ch_13,
	&ad7124_ch_14,
	&ad7124_ch_15,
	NULL
};

struct iio_attribute ad7124_status = {
	.name = "ad7124_status",
	.show = ad1724_iio_read_status,
	.store = NULL
};

struct iio_attribute ad7124_adc_ctrl = {
	.name = "ad7124_adc_ctrl",
	.show = ad1724_iio_read_adc_ctrl,
	.store = ad1724_iio_change_adc_ctrl
};

struct iio_attribute ad7124_ioctrl1 = {
	.name = "ad7124_ioctrl1",
	.show = ad1724_iio_read_ioctrl1,
	.store = ad1724_iio_change_ioctrl1
};

struct iio_attribute ad7124_ioctrl2 = {
	.name = "ad7124_ioctrl2",
	.show = ad1724_iio_read_ioctrl2,
	.store = ad1724_iio_change_ioctrl2
};

struct iio_attribute ad7124_id = {
	.name = "ad7124_id",
	.show = ad1724_iio_read_id,
	.store = NULL
};

struct iio_attribute ad7124_error = {
	.name = "ad7124_error",
	.show = ad1724_iio_read_error,
	.store = NULL
};

struct iio_attribute ad7124_error_en = {
	.name = "ad7124_error_en",
	.show = ad1724_iio_read_error_en,
	.store = ad1724_iio_change_error_en
};

struct iio_attribute ad7124_config_0 = {
	.name = "ad7124_config_0",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_1 = {
	.name = "ad7124_config_1",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_2 = {
	.name = "ad7124_config_2",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_3 = {
	.name = "ad7124_config_3",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_4 = {
	.name = "ad7124_config_4",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_5 = {
	.name = "ad7124_config_5",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_6 = {
	.name = "ad7124_config_6",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_config_7 = {
	.name = "ad7124_config_7",
	.show = ad1724_iio_read_configuration,
	.store = ad1724_iio_change_configuration
};

struct iio_attribute ad7124_flt_0 = {
	.name = "ad7124_flt_0",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_1 = {
	.name = "ad7124_flt_1",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_2 = {
	.name = "ad7124_flt_2",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_3 = {
	.name = "ad7124_flt_3",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_4 = {
	.name = "ad7124_flt_4",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_5 = {
	.name = "ad7124_flt_5",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_6 = {
	.name = "ad7124_flt_6",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_flt_7 = {
	.name = "ad7124_flt_7",
	.show = ad1724_iio_read_filter,
	.store = ad1724_iio_change_filter
};

struct iio_attribute ad7124_off_0 = {
	.name = "ad7124_off_0",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_1 = {
	.name = "ad7124_off_1",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_2 = {
	.name = "ad7124_off_2",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_3 = {
	.name = "ad7124_off_3",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_4 = {
	.name = "ad7124_off_4",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_5 = {
	.name = "ad7124_off_5",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_6 = {
	.name = "ad7124_off_6",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_off_7 = {
	.name = "ad7124_off_7",
	.show = ad1724_iio_read_offset,
	.store = ad1724_iio_change_offset
};

struct iio_attribute ad7124_gain_0 = {
	.name = "ad7124_gain_0",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_1 = {
	.name = "ad7124_gain_1",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_2 = {
	.name = "ad7124_gain_2",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_3 = {
	.name = "ad7124_gain_3",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_4 = {
	.name = "ad7124_gain_4",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_5 = {
	.name = "ad7124_gain_5",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_6 = {
	.name = "ad7124_gain_6",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute ad7124_gain_7 = {
	.name = "ad7124_gain_7",
	.show = ad1724_iio_read_gain,
	.store = ad1724_iio_change_gain
};

struct iio_attribute *ad7124_attributes[] = {
	&ad7124_status,
	&ad7124_adc_ctrl,
	&ad7124_ioctrl1,
	&ad7124_ioctrl2,
	&ad7124_id,
	&ad7124_error,
	&ad7124_error_en,
	&ad7124_config_0,
	&ad7124_config_1,
	&ad7124_config_2,
	&ad7124_config_3,
	&ad7124_config_4,
	&ad7124_config_5,
	&ad7124_config_6,
	&ad7124_config_7,
	&ad7124_flt_0,
	&ad7124_flt_1,
	&ad7124_flt_2,
	&ad7124_flt_3,
	&ad7124_flt_4,
	&ad7124_flt_5,
	&ad7124_flt_6,
	&ad7124_flt_7,
	&ad7124_off_0,
	&ad7124_off_1,
	&ad7124_off_2,
	&ad7124_off_3,
	&ad7124_off_4,
	&ad7124_off_5,
	&ad7124_off_6,
	&ad7124_off_7,
	&ad7124_gain_0,
	&ad7124_gain_1,
	&ad7124_gain_2,
	&ad7124_gain_3,
	&ad7124_gain_4,
	&ad7124_gain_5,
	&ad7124_gain_6,
	&ad7124_gain_7,
	NULL
};

struct iio_device iio_ad7124_device = {
	.num_ch = 16,
	.channels = ad7124_channels,
	.attributes = ad7124_attributes,
	.debug_attributes = NULL,
	.buffer_attributes = NULL,
	.transfer_dev_to_mem = NULL,
	.read_data = NULL,
	.transfer_mem_to_dev = NULL,
	.write_data = NULL
};

ssize_t ad1724_iio_read_configuration(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;
	uint8_t			config_no;

	sscanf(buf, "%d", &config_no);

	ad7124_read_register(desc, &desc->regs[(AD7124_CFG0_REG + config_no)]);
	value = desc->regs[(AD7124_CFG0_REG + config_no)].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_configuration(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint8_t			chan_no;
	uint16_t		reg_val;

	sscanf(buf, "%d %d", &chan_no, &reg_val);

	desc->regs[(AD7124_CFG0_REG + chan_no)].value = reg_val;

	ad7124_write_register(desc,
			desc->regs[(AD7124_CFG0_REG + chan_no)]);

	return len;
}

ssize_t ad1724_iio_read_filter(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;
	uint8_t			flt_no;

	sscanf(buf, "%d", &flt_no);

	ad7124_read_register(desc, &desc->regs[(AD7124_FILT0_REG + flt_no)]);
	value = desc->regs[(AD7124_FILT0_REG + flt_no)].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_filter(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint8_t			flt_no;
	uint32_t		reg_val;

	sscanf(buf, "%d %d", &flt_no, &reg_val);

	desc->regs[(AD7124_FILT0_REG + flt_no)].value = reg_val;

	ad7124_write_register(desc,
			desc->regs[(AD7124_FILT0_REG + flt_no)]);

	return len;
}

ssize_t ad1724_iio_read_offset(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;
	uint8_t			offset_no;

	sscanf(buf, "%d", &offset_no);

	ad7124_read_register(desc, &desc->regs[(AD7124_OFFS0_REG + offset_no)]);
	value = desc->regs[(AD7124_OFFS0_REG + offset_no)].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_offset(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint8_t			offset_no;
	uint32_t		reg_val;

	sscanf(buf, "%d %d", &offset_no, &reg_val);

	desc->regs[(AD7124_OFFS0_REG + offset_no)].value = reg_val;

	ad7124_write_register(desc,
			desc->regs[(AD7124_OFFS0_REG + offset_no)]);

	return len;
}

ssize_t ad1724_iio_read_gain(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;
	uint8_t			gain_no;

	sscanf(buf, "%d", &gain_no);

	ad7124_read_register(desc, &desc->regs[(AD7124_GAIN0_REG + gain_no)]);
	value = desc->regs[(AD7124_GAIN0_REG + gain_no)].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_gain(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint8_t			gain_no;
	uint32_t		reg_val;

	sscanf(buf, "%d %d", &gain_no, &reg_val);

	desc->regs[(AD7124_GAIN0_REG + gain_no)].value = reg_val;

	ad7124_write_register(desc,
			desc->regs[(AD7124_GAIN0_REG + gain_no)]);

	return len;
}

ssize_t ad1724_iio_read_status(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_STATUS_REG]);
	value = desc->regs[AD7124_STATUS_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_read_adc_ctrl(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_ADC_CTRL_REG]);
	value = desc->regs[AD7124_ADC_CTRL_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_adc_ctrl(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint16_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_ADC_CTRL_REG].value = reg_val;

	ad7124_write_register(desc, desc->regs[AD7124_ADC_CTRL_REG]);

	return len;
}

ssize_t ad1724_iio_read_ioctrl1(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_IO_CTRL1_REG]);
	value = desc->regs[AD7124_IO_CTRL1_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_ioctrl1(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint32_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_IO_CTRL1_REG].value = reg_val;

	ad7124_write_register(desc, desc->regs[AD7124_IO_CTRL1_REG]);

	return len;
}

ssize_t ad1724_iio_read_ioctrl2(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_IO_CTRL2_REG]);
	value = desc->regs[AD7124_IO_CTRL2_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_ioctrl2(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint16_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_IO_CTRL2_REG].value = reg_val;

	ad7124_write_register(desc, desc->regs[AD7124_IO_CTRL2_REG]);

	return len;
}

ssize_t ad1724_iio_read_id(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_ID_REG]);
	value = desc->regs[AD7124_ID_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_read_error(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_ERR_REG]);
	value = desc->regs[AD7124_ERR_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_read_error_en(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc, &desc->regs[AD7124_ERREN_REG]);
	value = desc->regs[AD7124_ERREN_REG].value;

	return snprintf(buf, len, "%"PRIu32"", value);
}

ssize_t ad1724_iio_change_error_en(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint32_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_ERREN_REG].value = reg_val;

	ad7124_write_register(desc, desc->regs[AD7124_ERREN_REG]);

	return len;
}


ssize_t ad1724_iio_read_chan_setup(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc,
			&desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)]);
	value = desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)].value;

	return snprintf(buf, len, "%"PRIu32"", ((value >> 12) & 0x7));
}

ssize_t ad1724_iio_change_chan_setup(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint16_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value &=
		~AD7124_CH_MAP_REG_SETUP(0x7);
	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value |=
		AD7124_CH_MAP_REG_SETUP(reg_val);

	ad7124_write_register(desc,
			desc->regs[AD7124_CH0_MAP_REG + channel->ch_num]);

	return len;
}

ssize_t ad1724_iio_read_chan_ainp(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc,
			&desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)]);
	value = desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)].value;

	return snprintf(buf, len, "%"PRIu32"", ((value >> 5) & 0x1f));
}

ssize_t ad1724_iio_change_chan_ainp(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint16_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value &=
		~AD7124_CH_MAP_REG_AINP(0x1F);
	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value |=
		AD7124_CH_MAP_REG_AINP(reg_val);

	ad7124_write_register(desc,
			desc->regs[AD7124_CH0_MAP_REG + channel->ch_num]);

	return len;
}

ssize_t ad1724_iio_read_chan_ainm(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev	*desc = device;
	uint32_t		value;

	ad7124_read_register(desc,
			&desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)]);
	value = desc->regs[(AD7124_CH0_MAP_REG + channel->ch_num)].value;

	return snprintf(buf, len, "%"PRIu32"", (value & 0x1f));
}

ssize_t ad1724_iio_change_chan_ainm(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel)
{
	struct ad7124_dev *desc = device;
	uint16_t		reg_val;

	sscanf(buf, "%d", &reg_val);

	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value &=
		~AD7124_CH_MAP_REG_AINM(0x1F);
	desc->regs[AD7124_CH0_MAP_REG + channel->ch_num].value |=
		AD7124_CH_MAP_REG_AINM(reg_val);

	ad7124_write_register(desc,
			desc->regs[AD7124_CH0_MAP_REG + channel->ch_num]);

	return len;
}

int32_t iio_ad7124_init(struct iio_ad7124_desc **desc,
		struct iio_ad7124_init_param *init_param)
{
	struct iio_ad7124_desc *ldesc;

	ldesc = calloc(1, sizeof(*ldesc));
	if (!ldesc)
		return FAILURE;

	return SUCCESS;
}

int32_t iio_ad7124_remove(struct iio_ad7124_desc *desc)
{
	if (!desc)
		return FAILURE;

	free(desc);

	return SUCCESS;
}

