#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USystem()
{
    class_< USystem, bases< UObject >  , boost::noncopyable>("USystem", no_init)
        .def_readwrite("StaleCacheDays", &USystem::StaleCacheDays)
        .def_readwrite("MaxStaleCacheSize", &USystem::MaxStaleCacheSize)
        .def_readwrite("MaxOverallCacheSize", &USystem::MaxOverallCacheSize)
        .def_readwrite("PackageSizeSoftLimit", &USystem::PackageSizeSoftLimit)
        .def_readwrite("AsyncIOBandwidthLimit", &USystem::AsyncIOBandwidthLimit)
        .def_readwrite("SavePath", &USystem::SavePath)
        .def_readwrite("CachePath", &USystem::CachePath)
        .def_readwrite("CacheExt", &USystem::CacheExt)
        .def_readwrite("ScreenShotPath", &USystem::ScreenShotPath)
        .def_readwrite("Paths", &USystem::Paths)
        .def_readwrite("IgnoredPaths", &USystem::IgnoredPaths)
        .def_readwrite("SeekFreePCPaths", &USystem::SeekFreePCPaths)
        .def_readwrite("ScriptPaths", &USystem::ScriptPaths)
        .def_readwrite("FRScriptPaths", &USystem::FRScriptPaths)
        .def_readwrite("FRCheatScriptPaths", &USystem::FRCheatScriptPaths)
        .def_readwrite("CutdownPaths", &USystem::CutdownPaths)
        .def_readwrite("Suppress", &USystem::Suppress)
        .def_readwrite("Extensions", &USystem::Extensions)
        .def_readwrite("SeekFreePCExtensions", &USystem::SeekFreePCExtensions)
        .def_readwrite("LocalizationPaths", &USystem::LocalizationPaths)
        .def_readwrite("TextureFileCacheExtension", &USystem::TextureFileCacheExtension)
        .def_readwrite("AudioFileCacheExtension", &USystem::AudioFileCacheExtension)
        .def_readwrite("MissingRedirectClassName", &USystem::MissingRedirectClassName)
        .def_readwrite("MissingRedirectObjectName", &USystem::MissingRedirectObjectName)
        .def_readwrite("Unsuppress", &USystem::Unsuppress)
        .def_readwrite("VfTable_FExec", &USubsystem::VfTable_FExec)
        .def("StaticClass", &USystem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}