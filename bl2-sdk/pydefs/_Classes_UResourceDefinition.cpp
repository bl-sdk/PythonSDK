#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourceDefinition(py::module &m)
{
    py::class_< UResourceDefinition,  UGBXDefinition   >(m, "UResourceDefinition")
		.def_static("StaticClass", &UResourceDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ResourceName", &UResourceDefinition::ResourceName)
        .def_readwrite("DefaultResourcePoolClass", &UResourceDefinition::DefaultResourcePoolClass)
        .def_readwrite("DefaultResourcePoolDefinition", &UResourceDefinition::DefaultResourcePoolDefinition)
        .def_readwrite("ResourceContextResolver", &UResourceDefinition::ResourceContextResolver)
          ;
}