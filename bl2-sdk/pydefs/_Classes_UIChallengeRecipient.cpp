#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChallengeRecipient(py::module &m)
{
    py::class_< UIChallengeRecipient,  UInterface   >(m, "UIChallengeRecipient")
        .def("ReceiveChallenge", &UIChallengeRecipient::ReceiveChallenge)
          ;
}