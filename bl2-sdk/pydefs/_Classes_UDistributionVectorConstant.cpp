#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorConstant(py::module &m)
{
    py::class_< UDistributionVectorConstant,  UDistributionVector   >(m, "UDistributionVectorConstant")
        .def_readwrite("Constant", &UDistributionVectorConstant::Constant)
        .def_readwrite("LockedAxes", &UDistributionVectorConstant::LockedAxes)
          ;
}