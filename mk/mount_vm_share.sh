sudo mount -t 9p -o trans=virtio share ./share
sudo bindfs --map=501/mmw:@dialout/@mmw share ./share
