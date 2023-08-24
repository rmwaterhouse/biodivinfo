# Converting a molecular species phylogeny into a time-calibrated ultrametric species tree
# If you do not yet have the package 'ape' you will need to install it: install.packages("ape")

# Load ape package
library(ape)

# Read in the molecular phylogeny
# Make sure you are working in the same directory as the tree file
moltree <- read.tree("OGs-1000-moltree-names-rooted.tre")

# Provide root calibration age of 256 million years
calib <- makeChronosCalib(moltree, node = "root", age.min = 256)

# use the chronos function to convert the tree with the age constraint
timtree <- chronos(moltree, calibration = calib, lambda = 1, model = "discrete", control = chronos.control(nb.rate.cat = 1))

# check that the result is indeed ultrametric
is.ultrametric(timtree)
write.tree(timtree, file = "Coleoptera_TimeTree.tre")

