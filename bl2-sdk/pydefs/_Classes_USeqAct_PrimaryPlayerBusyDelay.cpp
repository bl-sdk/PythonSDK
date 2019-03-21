#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PrimaryPlayerBusyDelay()
{
    class_< USeqAct_PrimaryPlayerBusyDelay, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_PrimaryPlayerBusyDelay", no_init)
        .def_readwrite("PrimaryPlayer", &USeqAct_PrimaryPlayerBusyDelay::PrimaryPlayer)
        .def("StaticClass", &USeqAct_PrimaryPlayerBusyDelay::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUpdate", &USeqAct_PrimaryPlayerBusyDelay::eventUpdate)
        .staticmethod("StaticClass")
  ;
}