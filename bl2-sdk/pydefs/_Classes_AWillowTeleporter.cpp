#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTeleporter(py::module &m)
{
    py::class_< AWillowTeleporter,  ATeleporter   >(m, "AWillowTeleporter")
        .def("OnToggle", &AWillowTeleporter::OnToggle)
          ;
}