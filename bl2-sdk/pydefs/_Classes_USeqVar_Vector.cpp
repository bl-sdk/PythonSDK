#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Vector(py::module &m)
{
    py::class_< USeqVar_Vector,  USequenceVariable   >(m, "USeqVar_Vector")
		.def_static("StaticClass", &USeqVar_Vector::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VectValue", &USeqVar_Vector::VectValue)
          ;
}