#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKMeshProps(py::module &m)
{
    py::class_< UKMeshProps,  UObject   >(m, "UKMeshProps")
		.def_static("StaticClass", &UKMeshProps::StaticClass, py::return_value_policy::reference)
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
          ;
}