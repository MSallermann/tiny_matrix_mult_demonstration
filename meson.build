project('flowy', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++20',
                     'optimization=3'])

cpp_args = []

cppc = meson.get_compiler('cpp')

cpp_args += cppc.get_supported_arguments([
  '-ffast-math',                 # Enable faster, non-IEEE math calculations
])

if cpp_args.length() > 0
  message('Adding compiler flags', cpp_args)
endif

incdir = include_directories(['.'])

_deps = [
  dependency('xtensor'),
  dependency('xtensor-blas'),
]

main_xtensor = executable('main_xtensor',
  'main_xtensor.cpp',
  install : true,
  dependencies : [_deps],
  cpp_args : cpp_args
)

main_pure = executable('main_pure',
  'main_pure.cpp',
  install : true,
  dependencies : [],
  cpp_args : cpp_args
)