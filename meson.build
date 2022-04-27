project('flatbufferscwrapper','cpp', default_options : ['cpp_std=c++11'], version: '0.1.0')

flatbuffers = dependency('flatbuffers')

install_headers(
  'cflexwrapper.h',
  subdir: 'cflexbuffers'
)

library(
  'flatbufferscwrapper',
  'cflexwrapper.cpp',
  dependencies: [flatbuffers],
  install: true
)