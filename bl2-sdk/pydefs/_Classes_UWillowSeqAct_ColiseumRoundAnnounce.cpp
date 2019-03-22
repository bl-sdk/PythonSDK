#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRoundAnnounce(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumRoundAnnounce,  USequenceAction   >(m, "UWillowSeqAct_ColiseumRoundAnnounce")
        .def("StaticClass", &UWillowSeqAct_ColiseumRoundAnnounce::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumRoundAnnounce::eventActivated)
          ;
}