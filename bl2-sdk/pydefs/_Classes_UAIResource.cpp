#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResource(py::module &m)
{
    py::class_< UAIResource,  UGBXDefinition   >(m, "UAIResource")
        .def_readwrite("ResourceRestrictions", &UAIResource::ResourceRestrictions)
        .def_readwrite("MaxUsers", &UAIResource::MaxUsers)
        .def_readwrite("MinUsers", &UAIResource::MinUsers)
          ;
}