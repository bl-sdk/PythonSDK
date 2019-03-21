#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChallengeRecipient(py::object m)
{
    py::class_< UIChallengeRecipient,  UInterface   >(m, "UIChallengeRecipient")
        .def("StaticClass", &UIChallengeRecipient::StaticClass, py::return_value_policy::reference)
        .def("ReceiveChallenge", &UIChallengeRecipient::ReceiveChallenge)
          ;
}