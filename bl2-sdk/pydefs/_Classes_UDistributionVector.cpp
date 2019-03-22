#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVector(py::module &m)
{
    py::class_< UDistributionVector,  UComponent   >(m, "UDistributionVector")
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionVector::VfTable_FCurveEdInterface)
        .def("GetVectorValue", &UDistributionVector::GetVectorValue)
          ;
}