#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTeleporter(py::module &m)
{
    py::class_< AWillowTeleporter,  ATeleporter   >(m, "AWillowTeleporter")
        .def("StaticClass", &AWillowTeleporter::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AWillowTeleporter::OnToggle)
          ;
}