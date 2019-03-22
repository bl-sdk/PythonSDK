#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlaySound(py::module &m)
{
    py::class_< UBehavior_PlaySound,  UBehaviorBase   >(m, "UBehavior_PlaySound")
        .def_readwrite("Sound", &UBehavior_PlaySound::Sound)
        .def("ApplyBehaviorToContext", &UBehavior_PlaySound::ApplyBehaviorToContext)
          ;
}