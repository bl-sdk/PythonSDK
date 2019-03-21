#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkLoadBank()
{
    class_< USeqAct_AkLoadBank, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_AkLoadBank", no_init)
        .def("StaticClass", &USeqAct_AkLoadBank::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}