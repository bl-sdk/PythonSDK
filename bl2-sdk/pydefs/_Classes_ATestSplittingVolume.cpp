#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATestSplittingVolume(py::object m)
{
    py::class_< ATestSplittingVolume,  AVolume   >(m, "ATestSplittingVolume")
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &ATestSplittingVolume::VfTable_IInterface_NavMeshPathObject)
        .def("StaticClass", &ATestSplittingVolume::StaticClass, py::return_value_policy::reference)
          ;
}