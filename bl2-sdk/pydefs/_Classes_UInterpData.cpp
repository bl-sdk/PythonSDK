#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpData(py::module &m)
{
    py::class_< UInterpData,  USequenceVariable   >(m, "UInterpData")
		.def_static("StaticClass", &UInterpData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InterpLength", &UInterpData::InterpLength)
        .def_readwrite("PathBuildTime", &UInterpData::PathBuildTime)
        .def_readwrite("InterpGroups", &UInterpData::InterpGroups)
        .def_readwrite("CurveEdSetup", &UInterpData::CurveEdSetup)
        .def_readwrite("EdSectionStart", &UInterpData::EdSectionStart)
        .def_readwrite("EdSectionEnd", &UInterpData::EdSectionEnd)
        .def_readwrite("BakeAndPruneStatus", &UInterpData::BakeAndPruneStatus)
        .def_readwrite("CachedDirectorGroup", &UInterpData::CachedDirectorGroup)
          ;
}