// PluginVersionResource.h -- Krakty fork stub.
//
// Upstream MQ2AutoBuff.rc includes <mmobugs/PluginVersionResource.h>
// which is part of MMOBugs's private build tree -- it defines the
// VERSIONINFO macros (FILEVERSION, PRODUCTVERSION, FileVersion,
// ProductVersion) consumed by the resource block at the bottom of
// MQ2AutoBuff.rc. We don't ship the MMOBugs private header.
//
// build.ps1's post-link rcedit step rewrites the VERSIONINFO block
// to embed Krakty/eqlib/timestamp identity anyway, so the values
// defined here are only what the .rc carries during the link step;
// rcedit clobbers them on the final binary.

#pragma once

#define MQ2_VERSION_CSV_UNQUOTED 0,0,0,0
#define MQ2_PLUGIN_VERSION       "0.0.0.0"
