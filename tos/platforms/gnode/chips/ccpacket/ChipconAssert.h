#ifndef CHIPCON_ASSERT_H
#define CHIPCON_ASSERT_H

enum ErrorCodes {
	ASSERT_CC_OFFSET = 100,
	ASSERT_CC_TEST = ASSERT_CC_OFFSET + 6,
	ASSERT_CC_HAL_SPI_REQUEST,
	ASSERT_CC_HAL_CHIP_VERSION,
	ASSERT_CC_HAL_TX_ALREADY,
	ASSERT_CC_HAL_CCA_NO_RX,
	ASSERT_CC_HAL_RSSI_NO_RX,
	ASSERT_CC_HAL_NOT_IDLE,
	ASSERT_CC_HAL_RX_FIFO_EMPTY,
	ASSERT_CC_HAL_PACKET_TOO_LARGE,
	ASSERT_CC_HAL_INVALID_LENGTH,
	ASSERT_CC_HAL_NO_PENDING,
	ASSERT_CC_HAL_TOO_MANY_PENDING,
	ASSERT_CC_HAL_TX_WAS_RX,
	ASSERT_CC_HAL_G0_HIGH,
	ASSERT_CC_HAL_NO_TX,
	ASSERT_CC_HAL_CALIBRATE_TX,
	ASSERT_CC_RXTX_NULL_POINTER,
	ASSERT_CC_RXTX_BAD_TX_POINTER,
	ASSERT_CC_RXTX_BROADCAST,
	ASSERT_CC_ACK_SUBSEND_FAILED,
	ASSERT_CC_ACK_SEND_ACK_FAILED,
	ASSERT_CC_ACK_UNEXPECTED_ERROR,
	ASSERT_CC_ACK_SEND,
	ASSERT_CC_ACK_PACKET,
	ASSERT_CC_ACK_BUSY,
	ASSERT_CC_ACK_STATE,
	ASSERT_CC_LPL_OFF,	
	ASSERT_CC_LPL_START,
	ASSERT_CC_LPL_STOP,
	ASSERT_CC_LPL_SEND,
	ASSERT_CC_AM_SENDDONE,
	ASSERT_CC_AM_MODIFIED,
};

#endif