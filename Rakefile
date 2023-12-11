require "ceedling"
Ceedling.load_project

task :default => %w[ test:all release ]

desc "Convert elf to bin for programming to the target"
task :convert => :release do
  elf_file = "build/release/#{RELEASE_BUILD_OUTPUT}.elf"
  bin_file = "build/release/#{RELEASE_BUILD_OUTPUT}.bin"
  cmd = "arm-none-eabi-objcopy -O binary -S #{elf_file} #{bin_file}"
  puts "Converting #{elf_file} to #{bin_file}..." 
  sh cmd
end

desc "Download binary into Flash memory"
task :flash => :convert do
  bin_file = "build/release/#{RELEASE_BUILD_OUTPUT}.bin"
  cmd = "st-flash write #{bin_file} 0x8000000"
  puts "Downloading #{bin_file} to Flash memory..."
  sh cmd
end

