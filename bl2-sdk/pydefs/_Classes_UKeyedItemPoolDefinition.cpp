#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKeyedItemPoolDefinition()
{
    py::class_< UKeyedItemPoolDefinition,  UItemPoolDefinition   >("UKeyedItemPoolDefinition")
        .def_readwrite("Key", &UKeyedItemPoolDefinition::Key)
        .def("StaticClass", &UKeyedItemPoolDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}