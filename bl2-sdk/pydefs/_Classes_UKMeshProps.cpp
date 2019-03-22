#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKMeshProps(py::module &m)
{
    py::class_< UKMeshProps,  UObject   >(m, "UKMeshProps")
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
          ;
}