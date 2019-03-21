#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChallengeRecipient()
{
    py::class_< UIChallengeRecipient,  UInterface   >("UIChallengeRecipient")
        .def("StaticClass", &UIChallengeRecipient::StaticClass, py::return_value_policy::reference)
        .def("ReceiveChallenge", &UIChallengeRecipient::ReceiveChallenge)
        .staticmethod("StaticClass")
  ;
}