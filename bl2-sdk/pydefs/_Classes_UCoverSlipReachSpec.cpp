#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverSlipReachSpec(py::module &m)
{
    py::class_< UCoverSlipReachSpec,  UForcedReachSpec   >(m, "UCoverSlipReachSpec")
        .def_readwrite("SpecDirection", &UCoverSlipReachSpec::SpecDirection)
          ;
}