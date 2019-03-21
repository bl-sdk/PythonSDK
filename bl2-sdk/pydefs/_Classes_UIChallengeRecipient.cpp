#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIChallengeRecipient()
{
    class_< UIChallengeRecipient, bases< UInterface >  , boost::noncopyable>("UIChallengeRecipient", no_init)
        .def("StaticClass", &UIChallengeRecipient::StaticClass, return_value_policy< reference_existing_object >())
        .def("ReceiveChallenge", &UIChallengeRecipient::ReceiveChallenge)
        .staticmethod("StaticClass")
  ;
}