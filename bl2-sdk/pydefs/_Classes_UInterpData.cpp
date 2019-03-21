#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpData()
{
    class_< UInterpData, bases< USequenceVariable >  , boost::noncopyable>("UInterpData", no_init)
        .def_readwrite("InterpLength", &UInterpData::InterpLength)
        .def_readwrite("PathBuildTime", &UInterpData::PathBuildTime)
        .def_readwrite("InterpGroups", &UInterpData::InterpGroups)
        .def_readwrite("CurveEdSetup", &UInterpData::CurveEdSetup)
        .def_readwrite("EdSectionStart", &UInterpData::EdSectionStart)
        .def_readwrite("EdSectionEnd", &UInterpData::EdSectionEnd)
        .def_readwrite("BakeAndPruneStatus", &UInterpData::BakeAndPruneStatus)
        .def_readwrite("CachedDirectorGroup", &UInterpData::CachedDirectorGroup)
        .def("StaticClass", &UInterpData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}