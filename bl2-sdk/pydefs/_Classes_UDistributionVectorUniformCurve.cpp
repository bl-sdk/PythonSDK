#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniformCurve(py::module &m)
{
    py::class_< UDistributionVectorUniformCurve,  UDistributionVector   >(m, "UDistributionVectorUniformCurve")
        .def_readwrite("ConstantCurve", &UDistributionVectorUniformCurve::ConstantCurve)
          ;
}