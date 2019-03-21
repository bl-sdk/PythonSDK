#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefabSequenceContainer()
{
    py::class_< UPrefabSequenceContainer,  USequence   >("UPrefabSequenceContainer")
        .def("StaticClass", &UPrefabSequenceContainer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}