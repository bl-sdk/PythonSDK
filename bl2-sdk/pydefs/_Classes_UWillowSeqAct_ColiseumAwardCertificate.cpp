#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAwardCertificate()
{
    class_< UWillowSeqAct_ColiseumAwardCertificate, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumAwardCertificate", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumAwardCertificate::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumAwardCertificate::eventActivated)
        .staticmethod("StaticClass")
  ;
}