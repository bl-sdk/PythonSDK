#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PlayBinkMovie()
{
    class_< USeqAct_PlayBinkMovie, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_PlayBinkMovie", no_init)
        .def_readwrite("BinkMovieName", &USeqAct_PlayBinkMovie::BinkMovieName)
        .def("StaticClass", &USeqAct_PlayBinkMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}