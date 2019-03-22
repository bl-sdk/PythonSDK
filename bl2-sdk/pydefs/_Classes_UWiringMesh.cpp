#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWiringMesh(py::module &m)
{
    py::class_< UWiringMesh,  UStaticMesh   >(m, "UWiringMesh")
        .def("StaticClass", &UWiringMesh::StaticClass, py::return_value_policy::reference)
          ;
}