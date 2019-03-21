#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAnnouncePenaltyBox()
{
    py::class_< UWillowSeqAct_ColiseumAnnouncePenaltyBox,  USequenceAction   >("UWillowSeqAct_ColiseumAnnouncePenaltyBox")
        .def("StaticClass", &UWillowSeqAct_ColiseumAnnouncePenaltyBox::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}