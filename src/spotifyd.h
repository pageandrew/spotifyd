/*
 * spotifyd - A daemon playing music from spotify, in the spirit of MPD.
 * Copyright (C) 2015 Simon Persson
 * 
 * Spotifyd program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Spotifyd program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#define API_MESSAGE_LEN 1024

#include <libspotify/api.h>
#include <sys/queue.h>

#include "config.h"
#include "callbacks.h"
#include "audio.h"
#include "commandq.h"

audio_fifo_t g_audiofifo;

pthread_mutex_t notify_mutex;
pthread_cond_t notify_cond;
char notify_do;

bool is_playing;

void cleanup();
