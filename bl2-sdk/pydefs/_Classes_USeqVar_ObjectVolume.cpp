#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_ObjectVolume(py::module &m)
{
    py::class_< USeqVar_ObjectVolume,  USeqVar_Object   >(m, "USeqVar_ObjectVolume")
        .def_readwrite("LastUpdateTime", &USeqVar_ObjectVolume::LastUpdateTime)
        .def_readwrite("ContainedObjects", &USeqVar_ObjectVolume::ContainedObjects)
        .def_readwrite("ExcludeClassList", &USeqVar_ObjectVolume::ExcludeClassList)
          ;
}