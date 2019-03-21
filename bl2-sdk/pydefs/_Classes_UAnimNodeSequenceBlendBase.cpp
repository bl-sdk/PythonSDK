#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSequenceBlendBase()
{
    py::class_< UAnimNodeSequenceBlendBase,  UAnimNodeSequence   >("UAnimNodeSequenceBlendBase")
        .def_readwrite("Anims", &UAnimNodeSequenceBlendBase::Anims)
        .def("StaticClass", &UAnimNodeSequenceBlendBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}