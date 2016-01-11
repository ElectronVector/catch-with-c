require 'rake/clean'

CLEAN.include('*.o')
CLOBBER.include('*.exe')

source_files = Rake::FileList["*.c"]
object_files = source_files.ext(".o")

desc "Build the catch executable"
file "catch.exe" => object_files do
    sh "g++ #{object_files} -o catch.exe"
end

rule '.o' => '.c' do |task|
    sh "g++ -c #{task.source}"
end

desc "Run catch tests"
task :default => "catch.exe" do
    begin
        sh "./catch.exe"
    rescue => e
    end
end
