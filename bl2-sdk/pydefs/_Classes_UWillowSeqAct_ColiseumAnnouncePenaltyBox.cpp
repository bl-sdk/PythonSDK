#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAnnouncePenaltyBox(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumAnnouncePenaltyBox,  USequenceAction   >(m, "UWillowSeqAct_ColiseumAnnouncePenaltyBox")
        .def("StaticClass", &UWillowSeqAct_ColiseumAnnouncePenaltyBox::StaticClass, py::return_value_policy::reference)
          ;
}