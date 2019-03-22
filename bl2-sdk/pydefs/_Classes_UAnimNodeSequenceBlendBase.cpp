#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSequenceBlendBase(py::module &m)
{
    py::class_< UAnimNodeSequenceBlendBase,  UAnimNodeSequence   >(m, "UAnimNodeSequenceBlendBase")
        .def_readwrite("Anims", &UAnimNodeSequenceBlendBase::Anims)
          ;
}