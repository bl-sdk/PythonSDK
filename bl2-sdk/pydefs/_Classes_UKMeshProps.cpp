#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKMeshProps(py::object m)
{
    py::class_< UKMeshProps,  UObject   >(m, "UKMeshProps")
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
        .def("StaticClass", &UKMeshProps::StaticClass, py::return_value_policy::reference)
          ;
}