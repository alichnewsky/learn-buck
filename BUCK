include_defs('//BUCKAROO_DEPS')

cxx_binary(
  name = 'learn-buck',
  header_namespace = 'learn-buck',
  srcs = glob([
    'learn-buck/src/**/*.cpp',
  ]),
  headers = subdir_glob([
    ('learn-buck/include', '**/*.hpp'),
    ('learn-buck/include', '**/*.h'),
  ]),
  compiler_flags = [
    '-std=c++14',
  ],
  linker_flags = [
    '-pthread',
  ],
  deps = BUCKAROO_DEPS,
)

