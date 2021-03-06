void Plots()
{
  TControlBar *bar2 = new TControlBar("vertical");
  //bar2->AddButton("Residuals",".x ../macros/Residuals.C", "...  >>Residuals<<");
  bar2->AddButton("Pulls",".x ../macros/Pulls.C", "...  >>Pulls<<");
  bar2->AddButton("IPResolution",".x ../macros/D0Resolution.C", "...  >>IP Resolution<<");
  bar2->AddButton("Momentum Resolution",".x ../macros/PResolution.C", "...  >>Mom. Resolution<<");
  bar2->AddButton("#sigma=f(#theta, P)",".x ../macros/sigma.C", "...  >>#sigma=f(#theta, P)<<");
  bar2->AddButton("#means=f(#theta, P)",".x ../macros/mean.C", "...  >>#means=f(#theta, P)<<");
  bar2->AddButton("Exit",".q", "...  >>Exit<<");
  bar2->Show();
}
