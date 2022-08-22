/* GStreamer Wavpack plugin
 * Copyright (c) 2004 Arwed v. Merkatz <v.merkatz@gmx.net>
 * Copyright (c) 2006 Sebastian Dröge <slomo@circular-chaos.org>
 *
 * gstwavpackdec.h: raw Wavpack bitstream decoder
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_WAVPACK_DEC_H__
#define __GST_WAVPACK_DEC_H__

#include <gst/gst.h>
#include <gst/audio/gstaudiodecoder.h>

#include <wavpack/wavpack.h>

#include "gstwavpackstreamreader.h"

G_BEGIN_DECLS

#define GST_TYPE_WAVPACK_DEC (gst_wavpack_dec_get_type())
G_DECLARE_FINAL_TYPE (GstWavpackDec, gst_wavpack_dec, GST, WAVPACK_DEC,
    GstAudioDecoder)

struct _GstWavpackDec
{
  GstAudioDecoder element;

  /*< private > */

  WavpackContext *context;
  WavpackStreamReader *stream_reader;

  read_id wv_id;

  gint sample_rate;
  gint depth;
  gint width;
  gint channels;
  gint channel_mask;
  gboolean mode_float;

  gint channel_reorder_map[64];

};

gboolean gst_wavpack_dec_plugin_init (GstPlugin * plugin);

G_END_DECLS
#endif /* __GST_WAVPACK_DEC_H__ */
