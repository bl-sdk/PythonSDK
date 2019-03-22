#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRuleAnnounce(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumRuleAnnounce,  USequenceAction   >(m, "UWillowSeqAct_ColiseumRuleAnnounce")
        .def("eventActivated", &UWillowSeqAct_ColiseumRuleAnnounce::eventActivated)
          ;
}