#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_PrimaryLocalPlayer()
{
    class_< USeqVar_PrimaryLocalPlayer, bases< USeqVar_Object >  , boost::noncopyable>("USeqVar_PrimaryLocalPlayer", no_init)
        .def("StaticClass", &USeqVar_PrimaryLocalPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}