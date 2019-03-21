#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXCrossLevelReferenceContainer()
{
    py::class_< UGBXCrossLevelReferenceContainer,  UObject   >("UGBXCrossLevelReferenceContainer")
        .def_readwrite("CrossLevelObjectRef", &UGBXCrossLevelReferenceContainer::CrossLevelObjectRef)
        .def("StaticClass", &UGBXCrossLevelReferenceContainer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}